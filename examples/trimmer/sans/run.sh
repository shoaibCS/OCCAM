rm -rf slash*

slash --disable-inlining --inter-spec-policy=onlyonce --intra-spec-policy=onlyonce --use-pointer-analysis --work-dir=slash_once ${1}

slash --disable-inlining --inter-spec-policy=none --intra-spec-policy=none --use-pointer-analysis --work-dir=slash_none ${1}

