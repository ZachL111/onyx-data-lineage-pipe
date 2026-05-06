# onyx-data-lineage-pipe

`onyx-data-lineage-pipe` keeps a focused C++ implementation around data engineering. The project goal is to build a C++ toolkit that studies lineage behavior through negative fixtures, with human-readable error snapshots and local-only command execution.

## Why It Exists

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how schema drift and partition skew should influence a review result.

## Onyx Data Lineage Pipe Review Notes

`stress` and `edge` are the cases worth reading first. They show the optimistic and cautious ends of the fixture.

## Features

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/onyx-data-lineage-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `lineage depth` and `partition skew`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture Notes

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The added C++ path is deliberately direct, with fixtures doing most of the explaining.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Tests

The check exercises the source code and the review fixture. `stress` is the high score at 219; `edge` is the low score at 149.

## Limitations And Roadmap

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
