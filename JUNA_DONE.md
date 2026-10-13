# Junafetch build evidence

2026-10-13: pinned detector builds with GNU 15.2.0 and lean Windows configuration.
All 18 upstream CTest cases passed. JSON detection returned OS, CPU, physical/virtual GPU,
memory, disks, uptime and shell records. The excluded codec module returns an explicit error.
PE imports are Windows system libraries, with no external GNU runtime DLL required.

Limitations: DXCore headers are absent, so GPU type detection uses the upstream fallback;
the consumer must retain uncertain adapters in detailed output. Upstream compiler conversion
and aliasing warnings remain. Rust presentation, embedded delivery and authenticated privacy
integration are being implemented in Juna Terminal; this detector milestone does not claim them.

The supplied original ASCII is stored without newline normalization. Compact 48x18 and
64x24 data are alternatives for the Rust presentation layer, not image protocols.
