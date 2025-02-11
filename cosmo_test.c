#include <stdio.h>
#include <uv.h>

void timer_cb(uv_timer_t* handle) {
  printf("Hello, libuv with Cosmopolitan libc!\n");
  uv_timer_stop(handle);
  uv_close((uv_handle_t*)handle, NULL);
}

int main(void) {
  uv_loop_t* loop = uv_default_loop();
  uv_timer_t timer;

  uv_timer_init(loop, &timer);
  /* Start a one-shot timer that fires after 1000 ms (1 second) */
  uv_timer_start(&timer, timer_cb, 1000, 0);

  uv_run(loop, UV_RUN_DEFAULT);
  return 0;
}
