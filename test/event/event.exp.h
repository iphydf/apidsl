
#ifndef FOOBAR_DEFINED
#define FOOBAR_DEFINED
typedef struct FooBar FooBar;
#endif /* FOOBAR_DEFINED */

/**
 * yoy
 */
typedef void foobar_thing_cb(FooBar *bar, void *user_data);


/**
 * Set the callback for the `thing` event. Pass NULL to unset.
 *
 */
void foobar_callback_thing(FooBar *bar, foobar_thing_cb *callback, void *user_data);

/**
 * yoy
 */
typedef void foobar_bleh_thing_cb(FooBar *bar, void *user_data);


/**
 * Set the callback for the `bleh_thing` event. Pass NULL to unset.
 *
 */
void foobar_callback_bleh_thing(FooBar *bar, foobar_bleh_thing_cb *callback, void *user_data);

/**
 * Heyo haha.
 */
typedef void *foobar_bleh_otherthing_cb(FooBar *bar, uint32_t fluff, void *user_data);


/**
 * Set the callback for the `bleh_otherthing` event. Pass NULL to unset.
 *
 */
void foobar_callback_bleh_otherthing(FooBar *bar, foobar_bleh_otherthing_cb *callback);

void *foobar_iterate(FooBar *bar, void *user_data);

void *foobar_iterate2(FooBar *bar, void *user_data);
