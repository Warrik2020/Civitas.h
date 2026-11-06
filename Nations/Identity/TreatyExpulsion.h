#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class TreatyExpulsion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TreatyExpulsion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "TreatyExpulsion") {}
    public:
        int root() const { return ReadField<int>("root"); }
        void SetRoot(int value) const { WriteField<int>("root", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        int fromNationId() const { return ReadField<int>("fromNationId"); }
        void SetFromNationId(int value) const { WriteField<int>("fromNationId", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        void SetTiles(void* value) const { WriteField<void*>("tiles", value); }
        int cursor() const { return ReadField<int>("cursor"); }
        void SetCursor(int value) const { WriteField<int>("cursor", value); }
        int ticksLeft() const { return ReadField<int>("ticksLeft"); }
        void SetTicksLeft(int value) const { WriteField<int>("ticksLeft", value); }
        int64_t removedQ() const { return ReadField<int64_t>("removedQ"); }
        void SetRemovedQ(int64_t value) const { WriteField<int64_t>("removedQ", value); }
        int64_t circuitPresentQ() const { return ReadField<int64_t>("circuitPresentQ"); }
        void SetCircuitPresentQ(int64_t value) const { WriteField<int64_t>("circuitPresentQ", value); }
    };
}
