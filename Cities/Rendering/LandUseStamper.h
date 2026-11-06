#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Rendering
{
    class LandUseStamper : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandUseStamper(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Rendering", "LandUseStamper") {}
    public:
        void Step(void* cities, float ease) const { void* __callArgs[] = { cities, &ease }; Call("Step", __callArgs, 2); }
        void Upload(bool defer) const { void* __callArgs[] = { &defer }; Call("Upload", __callArgs, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
    };
}
