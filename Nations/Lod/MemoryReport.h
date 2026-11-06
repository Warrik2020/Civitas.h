#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class MemoryReport : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MemoryReport(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "MemoryReport") {}
    public:
        void* Collect() const { return CallStatic("Collect", nullptr, 0); }
        void* Format(void* r) const { void* __callArgs[] = { r }; return CallStatic("Format", __callArgs, 1); }
        void Log() const { CallStatic("Log", nullptr, 0); }
    };
}
