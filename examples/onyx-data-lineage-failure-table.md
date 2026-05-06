# Onyx Data Lineage Pipe Failure Table

| Case | Focus | Expected Lane |
| --- | --- | --- |
| g001 | schema drift | watch |
| g002 | lineage depth | watch |
| g003 | partition skew | watch |
| g004 | quality gap | hold |
| g005 | schema drift | ship |
| g006 | lineage depth | watch |
| g007 | partition skew | hold |
| g008 | quality gap | hold |
| g009 | schema drift | ship |
| g010 | lineage depth | watch |
| g011 | partition skew | ship |
| g012 | quality gap | ship |

Use this table when a verifier failure is hard to read from the raw CSV.
