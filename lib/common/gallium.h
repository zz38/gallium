#ifndef BRIGHTRAY_EXAMPLE_COMMON_GALLIUM_H_
#define BRIGHTRAY_EXAMPLE_COMMON_GALLIUM_H_

#ifdef __cplusplus
extern "C" {
#endif

#define GALLIUM_EXPORT __attribute__ ((visibility ("default")))

GALLIUM_EXPORT void AddArg(const char* arg);
GALLIUM_EXPORT int RunGallium();

// gallium_error represents an error
typedef struct GALLIUM_EXPORT gallium_error {
	const char* msg;
} gallium_error_t;

// gallium_window represents a window
struct GALLIUM_EXPORT gallium_window {
	int index;
};

// GalliumLoop runs the chromium browser loop
GALLIUM_EXPORT int GalliumLoop(const char* argv0, struct gallium_error**);

// GalliumCreateWindow creates a window pointed at the given url
GALLIUM_EXPORT struct gallium_window* GalliumCreateWindow(const char* url, struct gallium_error**);

#ifdef __cplusplus
}
#endif

#endif