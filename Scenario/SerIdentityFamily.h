#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerIdentityFamily : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerIdentityFamily(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerIdentityFamily") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int parentId() const { return ReadField<int>("parentId"); }
        void SetParentId(int value) const { WriteField<int>("parentId", value); }
        bool grand() const { return ReadField<bool>("grand"); }
        void SetGrand(bool value) const { WriteField<bool>("grand", value); }
        float r() const { return ReadField<float>("r"); }
        void SetR(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void SetG(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void SetB(float value) const { WriteField<float>("b", value); }
    };
}
