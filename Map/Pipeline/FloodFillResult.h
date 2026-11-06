#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Pipeline
{
    class FloodFillResult : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FloodFillResult(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Pipeline", "FloodFillResult") {}
    public:
        void* landLabel() const { return ReadField<void*>("landLabel"); }
        void landLabel(void* value) const { WriteField<void*>("landLabel", value); }
        void* oceanLabel() const { return ReadField<void*>("oceanLabel"); }
        void oceanLabel(void* value) const { WriteField<void*>("oceanLabel", value); }
        void* islands() const { return ReadField<void*>("islands"); }
        void islands(void* value) const { WriteField<void*>("islands", value); }
        void* lakes() const { return ReadField<void*>("lakes"); }
        void lakes(void* value) const { WriteField<void*>("lakes", value); }
    };
}
