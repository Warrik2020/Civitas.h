#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class CapturedLot : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CapturedLot(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "CapturedLot") {}
    public:
        int fromNationId() const { return ReadField<int>("fromNationId"); }
        void fromNationId(int value) const { WriteField<int>("fromNationId", value); }
        int designId() const { return ReadField<int>("designId"); }
        void designId(int value) const { WriteField<int>("designId", value); }
        int pool() const { return ReadField<int>("pool"); }
        void pool(int value) const { WriteField<int>("pool", value); }
        float units() const { return ReadField<float>("units"); }
        void units(float value) const { WriteField<float>("units", value); }
        int tick() const { return ReadField<int>("tick"); }
        void tick(int value) const { WriteField<int>("tick", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
    };
}
