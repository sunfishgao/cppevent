#include "test.h"
#include "test_listener.h"
#include "test_connection.h"
#include "test_tcp_server.h"
#include "test_time_event.h"
#include "test_connector_tcpclient.h"
#include "test_coroutine.h"
#include "test_http_message.h"
#include "test_utils.h"
#include "test_http_server.h"
namespace test {

static void do_test() {
   // test_listener();
   // test_connection();
    //test_time_event1();
    //test_time_event2();
   // test_time_event_event_loop();
    //test_tcp_server();
    //test_connector();
    //test_tcpclient();
   // test_coroutine();
    //test_coroutine_read_at_last();
   // test_http_request();
    //test_http_response();
    //test_utils();
    test_http_server();
}

}//namespace