#! /bin/csh -f

crab -status   -c crab_0_140328_150906
crab -status   -c crab_0_140328_151913

crab -get all   -c crab_0_140328_150906
crab -get all   -c crab_0_140328_151913

crab -resubmit bad   -c crab_0_140328_150906
crab -resubmit bad   -c crab_0_140328_151913

#crab -submit 1-500     -c crab_0_140328_150906
#crab -submit 501-1000  -c crab_0_140328_150906
#crab -submit 1001-1500 -c crab_0_140328_150906
#crab -submit 1501-2000 -c crab_0_140328_150906
#crab -submit 2001-2500 -c crab_0_140328_150906
#crab -submit 2501-3000 -c crab_0_140328_150906
#crab -submit 3001-3500 -c crab_0_140328_150906
#crab -submit 3501-4000 -c crab_0_140328_150906
#crab -submit 4001-4500 -c crab_0_140328_150906
#crab -submit 4501-5000 -c crab_0_140328_150906
#
#crab -submit 1-500     -c crab_0_140328_151913
#crab -submit 501-1000  -c crab_0_140328_151913
#crab -submit 1001-1500 -c crab_0_140328_151913
#crab -submit 1501-2000 -c crab_0_140328_151913
#crab -submit 2001-2500 -c crab_0_140328_151913
#crab -submit 2501-3000 -c crab_0_140328_151913
#crab -submit 3001-3500 -c crab_0_140328_151913
#crab -submit 3501-4000 -c crab_0_140328_151913
#crab -submit 4001-4500 -c crab_0_140328_151913
#crab -submit 4501-5000 -c crab_0_140328_151913
