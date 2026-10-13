# Junafetch detector

This fork pins Fastfetch 2.69.0 at 0c3b852bf7bad2837a814c7a31bf332092048a2b.
Original detection code and MIT/third-party notices are retained. Juna Terminal's Rust
frontend supplies the compact artwork, report layout and privacy integration separately.

The bundled Windows GNU detector disables image protocols, Lua, QuickJS, zlib and the
optional native video-codec detector. The latter requires DirectX declarations absent
from the current GNU toolchain and is outside the lean system report. Requesting it
returns an explicit unavailable message. This does not claim a working privacy frontend yet.

```powershell
cmake -S . -B build -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release -DJUNA_LEAN_WINDOWS=ON -DENABLE_IMAGE_LOGO=OFF -DENABLE_LUA=OFF -DENABLE_QUICKJS=OFF -DENABLE_ZLIB=OFF -DBUILD_FLASHFETCH=OFF -DBUILD_TESTS=ON -DSET_TWEAK=OFF -DENABLE_LTO=OFF
cmake --build build --parallel 2
ctest --test-dir build --output-on-failure
```

No public-IP request or background refresh is needed by Juna's default report.
