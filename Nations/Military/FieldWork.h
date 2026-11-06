#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class FieldWork : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldWork(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "FieldWork") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int ownerNationId() const { return ReadField<int>("ownerNationId"); }
        void ownerNationId(int value) const { WriteField<int>("ownerNationId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        void* anchor() const { return ReadField<void*>("anchor"); }
        void anchor(void* value) const { WriteField<void*>("anchor", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void facing(void* value) const { WriteField<void*>("facing", value); }
        float halfLength() const { return ReadField<float>("halfLength"); }
        void halfLength(float value) const { WriteField<float>("halfLength", value); }
        uint32_t seed() const { return ReadField<uint32_t>("seed"); }
        void seed(uint32_t value) const { WriteField<uint32_t>("seed", value); }
        float progress() const { return ReadField<float>("progress"); }
        void progress(float value) const { WriteField<float>("progress", value); }
        int holderId() const { return ReadField<int>("holderId"); }
        void holderId(int value) const { WriteField<int>("holderId", value); }
        int lastHeldTick() const { return ReadField<int>("lastHeldTick"); }
        void lastHeldTick(int value) const { WriteField<int>("lastHeldTick", value); }
        int createdTick() const { return ReadField<int>("createdTick"); }
        void createdTick(int value) const { WriteField<int>("createdTick", value); }
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
    };
}
