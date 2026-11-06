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
        int ScaledNodeSize(int baseSize, bool on) const { void* args[] = { &baseSize, &on }; return CallStaticValue<int>("ScaledNodeSize", args, 2); }
        bool AllOcean(void* chunks, int chunk) const { void* args[] = { chunks, &chunk }; return CallStaticValue<bool>("AllOcean", args, 2); }
        bool Ocean() const { return ReadStaticField<bool>("Ocean"); }
        void SetOcean(bool value) const { WriteStaticField<bool>("Ocean", value); }
        bool Scale() const { return ReadStaticField<bool>("Scale"); }
        void SetScale(bool value) const { WriteStaticField<bool>("Scale", value); }
    };
}
