#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class FrontSeams : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontSeams(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "FrontSeams") {}
    public:
        void* SpansOf(int armyId) const { void* __callArgs[] = { &armyId }; return Call("SpansOf", __callArgs, 1); }
        bool Holds(int armyId, float f, float slack = 0.001f) const { void* __callArgs[] = { &armyId, &f, &slack }; return CallValue<bool>("Holds", __callArgs, 3); }
        void Forget(int armyId) const { void* __callArgs[] = { &armyId }; Call("Forget", __callArgs, 1); }
        void Build(void* nc, void* geometry) const { void* __callArgs[] = { nc, geometry }; Call("Build", __callArgs, 2); }
        float WeightCap() const { return ReadStaticField<float>("WeightCap"); }
    };
}
