from delorean.clients.speculator_old import *

def spec_2(year, month, day, direction, unit, count):
    ret = get_end_start_epochs(year, month, day, direction, unit, count)
    return ret['shifted'] - ret['initial']