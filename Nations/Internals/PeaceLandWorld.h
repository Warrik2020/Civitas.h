#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceLandWorld : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceLandWorld(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceLandWorld") {}
    public:
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        void* pinned() const { return ReadField<void*>("pinned"); }
        void SetPinned(void* value) const { WriteField<void*>("pinned", value); }
        int typicalStateTiles() const { return ReadField<int>("typicalStateTiles"); }
        void SetTypicalStateTiles(int value) const { WriteField<int>("typicalStateTiles", value); }
        int minStateTiles() const { return ReadField<int>("minStateTiles"); }
        void SetMinStateTiles(int value) const { WriteField<int>("minStateTiles", value); }
    };
}
