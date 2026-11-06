#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class NeighbourLink : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NeighbourLink(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "NeighbourLink") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        uint8_t ring() const { return ReadField<uint8_t>("ring"); }
        void SetRing(uint8_t value) const { WriteField<uint8_t>("ring", value); }
        int cells() const { return ReadField<int>("cells"); }
        void SetCells(int value) const { WriteField<int>("cells", value); }
    };
}
