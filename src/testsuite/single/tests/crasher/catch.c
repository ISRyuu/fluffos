// This crasher test is setup more than 150 catch frames will crash the driver.
// 150 number come from CFG_MAX_CALL_DEPTH.
void nothing() { throw("never should be here."); }

void do_tests() {



// line 10 - 150 catches.
ASSERT_EQ(0, catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
catch(
// now we have 160-10+1=151 frames.



nothing()



// need 151 ), line 170-320.
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
); // ASSERT_EQ
}
