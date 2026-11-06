#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class LodIndex : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LodIndex(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "LodIndex") {}
    public:
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int64_t WriteSteps() const { return ReadStaticField<int64_t>("WriteSteps"); }
        void SetWriteSteps(int64_t value) const { WriteStaticField<int64_t>("WriteSteps", value); }
        int64_t Writes() const { return ReadStaticField<int64_t>("Writes"); }
        void SetWrites(int64_t value) const { WriteStaticField<int64_t>("Writes", value); }
        int64_t Rebuilds() const { return ReadStaticField<int64_t>("Rebuilds"); }
        void SetRebuilds(int64_t value) const { WriteStaticField<int64_t>("Rebuilds", value); }
    };
}
