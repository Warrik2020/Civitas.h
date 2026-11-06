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
        void* SpansOf(int armyId) const { void* args[] = { &armyId }; return Call("SpansOf", args, 1); }
        bool Holds(int armyId, float f, float slack) const { void* args[] = { &armyId, &f, &slack }; return CallValue<bool>("Holds", args, 3); }
        void Forget(int armyId) const { void* args[] = { &armyId }; Call("Forget", args, 1); }
        void Build(void* nc, void* geometry) const { void* args[] = { nc, geometry }; Call("Build", args, 2); }
        float WeightCap() const { return ReadStaticField<float>("WeightCap"); }
        void* members() const { return ReadField<void*>("members"); }
        void* edges() const { return ReadField<void*>("edges"); }
        void* weights() const { return ReadField<void*>("weights"); }
    };
}
