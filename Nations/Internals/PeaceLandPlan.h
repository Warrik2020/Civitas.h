#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceLandPlan : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceLandPlan(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceLandPlan") {}
    public:
        void* TakerPart(int nationId) const { void* __callArgs[] = { &nationId }; return Call("TakerPart", __callArgs, 1); }
        int CountOf(int kind) const { void* __callArgs[] = { &kind }; return CallValue<int>("CountOf", __callArgs, 1); }
        void* parts() const { return ReadField<void*>("parts"); }
        int loserTiles() const { return ReadField<int>("loserTiles"); }
        void loserTiles(int value) const { WriteField<int>("loserTiles", value); }
    };
}
