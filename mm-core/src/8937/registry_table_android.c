/*--------------------------------------------------------------------------
Copyright (c) 2015, The Linux Foundation. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

--------------------------------------------------------------------------*/
/*============================================================================
                            O p e n M A X   w r a p p e r s
                             O p e n  M A X   C o r e

  This module contains the registry table for the QTI's OpenMAX core.

*//*========================================================================*/


#include "qc_omx_core.h"

omx_core_cb_type core[] =
{
  {
    "OMX.qti.video.decoder.mpeg4sw",
    NULL, // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxSwVdec.so",
    {
      "video_decoder.mpeg4"
    }
  },
  {
    "OMX.qti.video.decoder.h263sw",
    NULL, // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxSwVdec.so",
    {
      "video_decoder.h263"
    }
  },
  {
    "OMX.qti.video.decoder.divxsw",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxSwVdec.so",
    {
      "video_decoder.divx"
    }
  },
  {
    "OMX.qti.video.decoder.divx4sw",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxSwVdec.so",
    {
      "video_decoder.divx"
    }
  },
  {
    "OMX.qcom.video.encoder.mpeg4sw",
    NULL, // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxSwVencMpeg4.so",
    {
      "video_encoder.mpeg4"
    }
  },
  {
    "OMX.qcom.video.encoder.h263sw",
    NULL, // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxSwVencMpeg4.so",
    {
      "video_encoder.h263"
    }
  },
};

const unsigned int SIZE_OF_CORE = sizeof(core) / sizeof(omx_core_cb_type);


