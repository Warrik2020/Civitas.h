#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Rendering
{
    class FarmRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FarmRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Rendering", "FarmRenderer") {}
    public:
        void Sync(void* clusters) const { void* args[] = { clusters }; Call("Sync", args, 1); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* hedV() const { return ReadField<void*>("hedV"); }
        void* hedC() const { return ReadField<void*>("hedC"); }
        void* hedT() const { return ReadField<void*>("hedT"); }
        void* cropV() const { return ReadField<void*>("cropV"); }
        void* cropC() const { return ReadField<void*>("cropC"); }
        void* cropT() const { return ReadField<void*>("cropT"); }
    };
}
