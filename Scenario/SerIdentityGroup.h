#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerIdentityGroup : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerIdentityGroup(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerIdentityGroup") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        int foundingNationId() const { return ReadField<int>("foundingNationId"); }
        void SetFoundingNationId(int value) const { WriteField<int>("foundingNationId", value); }
        int parentId() const { return ReadField<int>("parentId"); }
        void SetParentId(int value) const { WriteField<int>("parentId", value); }
        bool authored() const { return ReadField<bool>("authored"); }
        void SetAuthored(bool value) const { WriteField<bool>("authored", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        float r() const { return ReadField<float>("r"); }
        void SetR(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void SetG(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void SetB(float value) const { WriteField<float>("b", value); }
        int anchorTile() const { return ReadField<int>("anchorTile"); }
        void SetAnchorTile(int value) const { WriteField<int>("anchorTile", value); }
        int familyId() const { return ReadField<int>("familyId"); }
        void SetFamilyId(int value) const { WriteField<int>("familyId", value); }
        void* lineage() const { return ReadField<void*>("lineage"); }
        void SetLineage(void* value) const { WriteField<void*>("lineage", value); }
        void* lineageNames() const { return ReadField<void*>("lineageNames"); }
        void SetLineageNames(void* value) const { WriteField<void*>("lineageNames", value); }
        int origin() const { return ReadField<int>("origin"); }
        void SetOrigin(int value) const { WriteField<int>("origin", value); }
        int generation() const { return ReadField<int>("generation"); }
        void SetGeneration(int value) const { WriteField<int>("generation", value); }
        int bornWorldTick() const { return ReadField<int>("bornWorldTick"); }
        void SetBornWorldTick(int value) const { WriteField<int>("bornWorldTick", value); }
        int forgedBy() const { return ReadField<int>("forgedBy"); }
        void SetForgedBy(int value) const { WriteField<int>("forgedBy", value); }
        void* landName() const { return ReadField<void*>("landName"); }
        void SetLandName(void* value) const { WriteField<void*>("landName", value); }
    };
}
