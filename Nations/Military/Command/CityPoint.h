#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class CityPoint : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityPoint(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "CityPoint") {}
    public:
        void* pos() const { return ReadField<void*>("pos"); }
        void pos(void* value) const { WriteField<void*>("pos", value); }
        float weight() const { return ReadField<float>("weight"); }
        void weight(float value) const { WriteField<float>("weight", value); }
    };
}
