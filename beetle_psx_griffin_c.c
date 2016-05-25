#include "mednafen/tremor/codebook.c"
#include "mednafen/tremor/floor0.c"
#include "mednafen/tremor/floor1.c"
#include "mednafen/tremor/mdct.c"
#include "mednafen/tremor/registry.c"
#include "mednafen/tremor/mapping0.c"
#include "mednafen/tremor/info.c"
#include "mednafen/tremor/res012.c"
#include "mednafen/tremor/framing.c"
#include "mednafen/tremor/block.c"
#include "mednafen/tremor/sharedbook.c"
#include "mednafen/tremor/synthesis.c"
#include "mednafen/tremor/vorbisfile.c"
#include "mednafen/tremor/bitwise.c"
#include "mednafen/tremor/window.c"

#include "mednafen/file.c"
#include "mednafen/md5.c"
#include "mednafen/mednafen-endian.c"
#include "mednafen/trio/trio.c"
#include "mednafen/trio/triostr.c"

#include "libretro_cbs.c"
#include "libretro-common/streams/file_stream.c"
#include "libretro-common/rthreads/rthreads.c"
#include "scrc32.c"

#include "rsx/rsx_lib_soft.c"

#ifdef NEED_CD
#include "mednafen/cdrom/CDUtility.c"
#include "mednafen/cdrom/edc_crc32.c"
#include "mednafen/cdrom/l-ec.c"
#include "mednafen/cdrom/lec.c"
#include "mednafen/cdrom/recover-raw.c"
#include "mednafen/cdrom/galois.c"
#endif
