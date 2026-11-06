#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UnionProspect : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionProspect(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UnionProspect") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* deal() const { return ReadField<void*>("deal"); }
        void deal(void* value) const { WriteField<void*>("deal", value); }
        float odds() const { return ReadField<float>("odds"); }
        void odds(float value) const { WriteField<float>("odds", value); }
    };
}
