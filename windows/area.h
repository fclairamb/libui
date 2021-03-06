// 18 december 2015

// TODOs
// - things look very wrong on initial draw
// - initial scrolling is not set properly
// - should background be inherited from parent control?

struct uiArea {
	uiWindowsControl c;
	HWND hwnd;
	uiAreaHandler *ah;

	BOOL scrolling;
	intmax_t scrollWidth;
	intmax_t scrollHeight;
	intmax_t hscrollpos;
	intmax_t vscrollpos;
	int hwheelCarry;
	int vwheelCarry;

	clickCounter cc;
	BOOL capturing;

	BOOL inside;
	BOOL tracking;

	ID2D1HwndRenderTarget *rt;
};

// areadraw.h
extern BOOL areaDoDraw(uiArea *a, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT *lResult);
extern void areaDrawOnResize(uiArea *, RECT *);

// areascroll.c
extern BOOL areaDoScroll(uiArea *a, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT *lResult);
extern void areaScrollOnResize(uiArea *, RECT *);
extern void areaUpdateScroll(uiArea *a);

// areaevents.c
extern BOOL areaDoEvents(uiArea *a, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT *lResult);
extern void unregisterAreaFilter(void);

// areautil.c
extern void renderTargetGetSize(ID2D1RenderTarget *rt, D2D1_SIZE_F *size);
extern void loadAreaSize(uiArea *a, ID2D1RenderTarget *rt, double *width, double *height);
extern void pixelsToDIP(uiArea *a, double *x, double *y);
extern void dipToPixels(uiArea *a, double *x, double *y);
