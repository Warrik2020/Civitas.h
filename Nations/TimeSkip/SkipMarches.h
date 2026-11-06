#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipMarches : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipMarches(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipMarches") {}
    public:
        bool Tracks(int divisionId) const { void* args[] = { &divisionId }; return CallValue<bool>("Tracks", args, 1); }
        void Advance(int ticks) const { void* args[] = { &ticks }; Call("Advance", args, 1); }
        void Plan(void* mm, int playerId) const { void* args[] = { mm, &playerId }; Call("Plan", args, 2); }
        void Apply(void* mm, void* grid) const { void* args[] = { mm, grid }; Call("Apply", args, 2); }
        void* at() const { return ReadField<void*>("at"); }
        void SetAt(void* value) const { WriteField<void*>("at", value); }
        float ticks() const { return ReadField<float>("ticks"); }
        void SetTicks(float value) const { WriteField<float>("ticks", value); }
        int leg() const { return ReadField<int>("leg"); }
        void SetLeg(int value) const { WriteField<int>("leg", value); }
        int divisionId() const { return ReadField<int>("divisionId"); }
        void SetDivisionId(int value) const { WriteField<int>("divisionId", value); }
        void* samples() const { return ReadField<void*>("samples"); }
        void* legAims() const { return ReadField<void*>("legAims"); }
        float eta() const { return ReadField<float>("eta"); }
        void SetEta(float value) const { WriteField<float>("eta", value); }
    };
}
