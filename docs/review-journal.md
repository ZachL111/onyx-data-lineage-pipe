# Review Journal

I treated `onyx-data-lineage-pipe` as a project where the smallest useful behavior should still be inspectable.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 197, lane `ship`
- `stress`: `lineage depth`, score 219, lane `ship`
- `edge`: `partition skew`, score 149, lane `ship`
- `recovery`: `quality gap`, score 202, lane `ship`
- `stale`: `schema drift`, score 208, lane `ship`

## Note

The repository should be understandable without pretending it is larger than it is.
