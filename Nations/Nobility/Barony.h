#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Nobility
{
    class Barony : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Barony(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Nobility", "Barony") {}
    public:
        int deed() const { return ReadField<int>("deed"); }
        void deed(int value) const { WriteField<int>("deed", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void stateId(int value) const { WriteField<int>("stateId", value); }
        uint8_t local() const { return ReadField<uint8_t>("local"); }
        void local(uint8_t value) const { WriteField<uint8_t>("local", value); }
        int seatTile() const { return ReadField<int>("seatTile"); }
        void seatTile(int value) const { WriteField<int>("seatTile", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void tiles(int value) const { WriteField<int>("tiles", value); }
        int minX() const { return ReadField<int>("minX"); }
        void minX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void minY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void maxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void maxY(int value) const { WriteField<int>("maxY", value); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void ownerId(int value) const { WriteField<int>("ownerId", value); }
        int heldTiles() const { return ReadField<int>("heldTiles"); }
        void heldTiles(int value) const { WriteField<int>("heldTiles", value); }
    };
}
