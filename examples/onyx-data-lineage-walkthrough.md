# Onyx Data Lineage Pipe Walkthrough

This note is the quickest way to read the extra review model in `onyx-data-lineage-pipe`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 197 | ship |
| stress | lineage depth | 219 | ship |
| edge | partition skew | 149 | ship |
| recovery | quality gap | 202 | ship |
| stale | schema drift | 208 | ship |

Start with `stress` and `edge`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around lineage depth and quality gap.
