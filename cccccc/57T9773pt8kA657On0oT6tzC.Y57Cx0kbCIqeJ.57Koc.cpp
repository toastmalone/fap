
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      double PrimalLossDerivative(const double wx, const double label,
                              const double example_weight) const final {
    if (label * wx >= 1) {
      return 0;
    }
    if (label * wx <= 1 - gamma) {
      return -label;
    }
    return (wx - label) / gamma;
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/common_runtime/device.h'
#include 'tensorflow/core/framework/device_base.h'
    
    REGISTER_KERNEL_BUILDER(Name('TextLineReader').Device(DEVICE_CPU),
                        TextLineReaderOp);
REGISTER_KERNEL_BUILDER(Name('TextLineReaderV2').Device(DEVICE_CPU),
                        TextLineReaderOp);
    
      // If instruction is part of inputs, don't reset the bit_vector.
  if (std::find(inputs.begin(), inputs.end(), instruction) == inputs.end()) {
    bit_vector.SetToZero();
  }
  bit_vector.Set(GetIndex(instruction));
  for (const HloInstruction* input : inputs) {
    bit_vector.OrWith(GetBitVector(input));
  }
    
    #undef REGISTER_GPU
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include <d3d11.h>
#pragma comment (lib, 'd3d11.lib')
    
                        for (int testPointIndex = 0; testPointIndex < usedPointsCount && isGeneralPosition; testPointIndex++)
                    {
                        if (testPointIndex == startPointIndex || testPointIndex == endPointIndex)
                        {
                            continue;
                        }
    }
    
                template<typename T>
            static __device__ __forceinline__ T atomicMin(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count = ::min(*address, val);
                do
                {
                    *address = count;
                } while (*address > count);
    }
    
        // Extension: ARB_map_buffer_range
    extern GLvoid* (CODEGEN_FUNCPTR *MapBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
    extern void (CODEGEN_FUNCPTR *FlushMappedBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length);
    
        static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdFft.Runtime.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
    /* [-255..255].^2 */
const ushort g_8x16uSqrTab[] =
{
    65025, 64516, 64009, 63504, 63001, 62500, 62001, 61504, 61009, 60516, 60025, 59536,
    59049, 58564, 58081, 57600, 57121, 56644, 56169, 55696, 55225, 54756, 54289, 53824,
    53361, 52900, 52441, 51984, 51529, 51076, 50625, 50176, 49729, 49284, 48841, 48400,
    47961, 47524, 47089, 46656, 46225, 45796, 45369, 44944, 44521, 44100, 43681, 43264,
    42849, 42436, 42025, 41616, 41209, 40804, 40401, 40000, 39601, 39204, 38809, 38416,
    38025, 37636, 37249, 36864, 36481, 36100, 35721, 35344, 34969, 34596, 34225, 33856,
    33489, 33124, 32761, 32400, 32041, 31684, 31329, 30976, 30625, 30276, 29929, 29584,
    29241, 28900, 28561, 28224, 27889, 27556, 27225, 26896, 26569, 26244, 25921, 25600,
    25281, 24964, 24649, 24336, 24025, 23716, 23409, 23104, 22801, 22500, 22201, 21904,
    21609, 21316, 21025, 20736, 20449, 20164, 19881, 19600, 19321, 19044, 18769, 18496,
    18225, 17956, 17689, 17424, 17161, 16900, 16641, 16384, 16129, 15876, 15625, 15376,
    15129, 14884, 14641, 14400, 14161, 13924, 13689, 13456, 13225, 12996, 12769, 12544,
    12321, 12100, 11881, 11664, 11449, 11236, 11025, 10816, 10609, 10404, 10201, 10000,
     9801,  9604,  9409,  9216,  9025,  8836,  8649,  8464,  8281,  8100,  7921,  7744,
     7569,  7396,  7225,  7056,  6889,  6724,  6561,  6400,  6241,  6084,  5929,  5776,
     5625,  5476,  5329,  5184,  5041,  4900,  4761,  4624,  4489,  4356,  4225,  4096,
     3969,  3844,  3721,  3600,  3481,  3364,  3249,  3136,  3025,  2916,  2809,  2704,
     2601,  2500,  2401,  2304,  2209,  2116,  2025,  1936,  1849,  1764,  1681,  1600,
     1521,  1444,  1369,  1296,  1225,  1156,  1089,  1024,   961,   900,   841,   784,
      729,   676,   625,   576,   529,   484,   441,   400,   361,   324,   289,   256,
      225,   196,   169,   144,   121,   100,    81,    64,    49,    36,    25,    16,
        9,     4,     1,     0,     1,     4,     9,    16,    25,    36,    49,    64,
       81,   100,   121,   144,   169,   196,   225,   256,   289,   324,   361,   400,
      441,   484,   529,   576,   625,   676,   729,   784,   841,   900,   961,  1024,
     1089,  1156,  1225,  1296,  1369,  1444,  1521,  1600,  1681,  1764,  1849,  1936,
     2025,  2116,  2209,  2304,  2401,  2500,  2601,  2704,  2809,  2916,  3025,  3136,
     3249,  3364,  3481,  3600,  3721,  3844,  3969,  4096,  4225,  4356,  4489,  4624,
     4761,  4900,  5041,  5184,  5329,  5476,  5625,  5776,  5929,  6084,  6241,  6400,
     6561,  6724,  6889,  7056,  7225,  7396,  7569,  7744,  7921,  8100,  8281,  8464,
     8649,  8836,  9025,  9216,  9409,  9604,  9801, 10000, 10201, 10404, 10609, 10816,
    11025, 11236, 11449, 11664, 11881, 12100, 12321, 12544, 12769, 12996, 13225, 13456,
    13689, 13924, 14161, 14400, 14641, 14884, 15129, 15376, 15625, 15876, 16129, 16384,
    16641, 16900, 17161, 17424, 17689, 17956, 18225, 18496, 18769, 19044, 19321, 19600,
    19881, 20164, 20449, 20736, 21025, 21316, 21609, 21904, 22201, 22500, 22801, 23104,
    23409, 23716, 24025, 24336, 24649, 24964, 25281, 25600, 25921, 26244, 26569, 26896,
    27225, 27556, 27889, 28224, 28561, 28900, 29241, 29584, 29929, 30276, 30625, 30976,
    31329, 31684, 32041, 32400, 32761, 33124, 33489, 33856, 34225, 34596, 34969, 35344,
    35721, 36100, 36481, 36864, 37249, 37636, 38025, 38416, 38809, 39204, 39601, 40000,
    40401, 40804, 41209, 41616, 42025, 42436, 42849, 43264, 43681, 44100, 44521, 44944,
    45369, 45796, 46225, 46656, 47089, 47524, 47961, 48400, 48841, 49284, 49729, 50176,
    50625, 51076, 51529, 51984, 52441, 52900, 53361, 53824, 54289, 54756, 55225, 55696,
    56169, 56644, 57121, 57600, 58081, 58564, 59049, 59536, 60025, 60516, 61009, 61504,
    62001, 62500, 63001, 63504, 64009, 64516, 65025
};
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    // Class that lets you declare a global but does not add a static constructor
// to the binary. Eventually I'd like to have this auto-initialize in a
// multithreaded environment but for now it's easiest just to use manual
// initialization.
template <typename T>
class StaticInitialized {
public:
  constexpr StaticInitialized() :
    m_instance(nullptr)
  {}
    }
    
    // This allows storing the assert message before the current process terminates due to a crash
typedef void (*AssertHandler)(const char* message);
void setAssertHandler(AssertHandler assertHandler);
    
      bool isDirect() const;
    
      void seek(int64_t offset);
    
      virtual bool getChangeOption() const CXX11_OVERRIDE;
    
    AdaptiveFileAllocationIterator::AdaptiveFileAllocationIterator(
    BinaryStream* stream, int64_t offset, int64_t totalLength)
    : stream_(stream), offset_(offset), totalLength_(totalLength)
{
}
    
    class BinaryStream;
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    AuthConfig::AuthConfig(std::string user, std::string password)
    : user_(std::move(user)), password_(std::move(password))
{
}