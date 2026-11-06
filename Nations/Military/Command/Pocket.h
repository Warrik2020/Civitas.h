#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class Pocket : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Pocket(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "Pocket") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int encircler() const { return ReadField<int>("encircler"); }
        void SetEncircler(int value) const { WriteField<int>("encircler", value); }
        int sinceTick() const { return ReadField<int>("sinceTick"); }
        void SetSinceTick(int value) const { WriteField<int>("sinceTick", value); }
        int seenTick() const { return ReadField<int>("seenTick"); }
        void SetSeenTick(int value) const { WriteField<int>("seenTick", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void SetTiles(int value) const { WriteField<int>("tiles", value); }
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
        void* centroid() const { return ReadField<void*>("centroid"); }
        void SetCentroid(void* value) const { WriteField<void*>("centroid", value); }
        void* cities() const { return ReadField<void*>("cities"); }
        void* probes() const { return ReadField<void*>("probes"); }
        void* tileList() const { return ReadField<void*>("tileList"); }
    };
}
