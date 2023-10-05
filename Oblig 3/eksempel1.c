#include <>
#include <>
#include <>
#include <>
#include <>

//  Veldig eksamensrelevant

struct coffee {
  unsigned int kafflen;
  unsigned short milk;
  char coffe_stuff *coffee;
};

void send_coffee(struct coffee *kaff) {
  char buf[kaff->kafflen + sizeof(int) + sizeof(short)];

  kaff->coffe_stuff->payload;

  memcpy(buf, &kaff->kafflen, sizeof(int));
  memcpy(buf + sizeof(int), &kaff->milk, sizeof(short));
  memcpy(buf + sizeof(int) + sizeof(short), &kaff->coffee, kaff->kafflen);


}

int main(int argc, char const *argv[]) {
  struct coffee kaff;
  kaff.kafflen = 2000;
  kaff.milk = 1;
  kaff.coffee = malloc(2000);
  memset(&kaff.coffee, 11, 2000);


  printf("ld\n", sizeof(struct coffee));
  // VIl putte structen i et array. Problem operativsystemet legger til padding.(ekstra bytes)
  // lager et char-buffer.

  send_coffee(&kaff);

  return EXIT_SUCCESS;

}
