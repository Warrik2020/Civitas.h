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
        void* TakerPart(int nationId) const { void* args[] = { &nationId }; return Call("TakerPart", args, 1); }
        int CountOf(int kind) const { void* args[] = { &kind }; return CallValue<int>("CountOf", args, 1); }
        void* parts() const { return ReadField<void*>("parts"); }
        int loserTiles() const { return ReadField<int>("loserTiles"); }
        void SetLoserTiles(int value) const { WriteField<int>("loserTiles", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int people() const { return ReadField<int>("people"); }
        void SetPeople(int value) const { WriteField<int>("people", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
    };
}
