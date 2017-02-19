# (A) Production use (optimized mode)
OPT ?= -O2 -DNDEBUG
# (B) Debug mode
# OPT ?= -g2
# (C) Profiling mode
# OPT ?= -O2 -g2 -NDEBUG

TESTS = \
  src/url_pattern_test
  
SOURCES = $(wildcard src/*.cc)
