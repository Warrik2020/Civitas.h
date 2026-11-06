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
        bool Tracks(int divisionId) const { void* __callArgs[] = { &divisionId }; return CallValue<bool>("Tracks", __callArgs, 1); }
        void Advance(int ticks) const { void* __callArgs[] = { &ticks }; Call("Advance", __callArgs, 1); }
        void Plan(void* mm, int playerId) const { void* __callArgs[] = { mm, &playerId }; Call("Plan", __callArgs, 2); }
        void Apply(void* mm, void* grid) const { void* __callArgs[] = { mm, grid }; Call("Apply", __callArgs, 2); }
    };
}
