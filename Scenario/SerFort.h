#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerFort : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerFort(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerFort") {}
    public:
        int tile() const { return ReadField<int>("tile"); }
        void tile(int value) const { WriteField<int>("tile", value); }
        int type() const { return ReadField<int>("type"); }
        void type(int value) const { WriteField<int>("type", value); }
        int builderNationId() const { return ReadField<int>("builderNationId"); }
        void builderNationId(int value) const { WriteField<int>("builderNationId", value); }
        float progress() const { return ReadField<float>("progress"); }
        void progress(float value) const { WriteField<float>("progress", value); }
    };
}
