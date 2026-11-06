#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class StockBucket : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StockBucket(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "StockBucket") {}
    public:
        int designId() const { return ReadField<int>("designId"); }
        void designId(int value) const { WriteField<int>("designId", value); }
        int pool() const { return ReadField<int>("pool"); }
        void pool(int value) const { WriteField<int>("pool", value); }
        float count() const { return ReadField<float>("count"); }
        void count(float value) const { WriteField<float>("count", value); }
    };
}
