#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiIconsDrawn : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiIconsDrawn(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiIconsDrawn") {}
    public:
        void* Crown() const { return ReadStaticField<void*>("Crown"); }
        void* Factory() const { return ReadStaticField<void*>("Factory"); }
        void* Shield() const { return ReadStaticField<void*>("Shield"); }
        void* Scroll() const { return ReadStaticField<void*>("Scroll"); }
        void* Coins() const { return ReadStaticField<void*>("Coins"); }
        void* Chart() const { return ReadStaticField<void*>("Chart"); }
        void* People() const { return ReadStaticField<void*>("People"); }
        void* Rifle() const { return ReadStaticField<void*>("Rifle"); }
        void* Scales() const { return ReadStaticField<void*>("Scales"); }
        void* Star() const { return ReadStaticField<void*>("Star"); }
        void* Map() const { return ReadStaticField<void*>("Map"); }
    };
}
