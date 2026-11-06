#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class BigMapLod : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BigMapLod(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "BigMapLod") {}
    public:
        int ScaledNodeSize(int baseSize, bool on) const { void* __callArgs[] = { &baseSize, &on }; return CallStaticValue<int>("ScaledNodeSize", __callArgs, 2); }
        bool AllOcean(void* chunks, int chunk) const { void* __callArgs[] = { chunks, &chunk }; return CallStaticValue<bool>("AllOcean", __callArgs, 2); }
        bool Ocean() const { return ReadStaticField<bool>("Ocean"); }
        void Ocean(bool value) const { WriteStaticField<bool>("Ocean", value); }
        bool Scale() const { return ReadStaticField<bool>("Scale"); }
        void Scale(bool value) const { WriteStaticField<bool>("Scale", value); }
    };
}
