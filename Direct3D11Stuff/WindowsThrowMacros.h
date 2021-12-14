#pragma once

#define FWND_EXCEPT( hr ) Window::HrException( __LINE__,__FILE__,(hr) )
#define FWND_LAST_EXCEPT() Window::HrException( __LINE__,__FILE__,GetLastError() )
#define FWND_NOGFX_EXCEPT() Window::NoGfxException( __LINE__,__FILE__ )