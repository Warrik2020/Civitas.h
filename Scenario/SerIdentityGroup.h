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
        void id(int value) const { WriteField<int>("id", value); }
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        int foundingNationId() const { return ReadField<int>("foundingNationId"); }
        void foundingNationId(int value) const { WriteField<int>("foundingNationId", value); }
        int parentId() const { return ReadField<int>("parentId"); }
        void parentId(int value) const { WriteField<int>("parentId", value); }
        bool authored() const { return ReadField<bool>("authored"); }
        void authored(bool value) const { WriteField<bool>("authored", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        float r() const { return ReadField<float>("r"); }
        void r(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void g(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void b(float value) const { WriteField<float>("b", value); }
        int anchorTile() const { return ReadField<int>("anchorTile"); }
        void anchorTile(int value) const { WriteField<int>("anchorTile", value); }
        int familyId() const { return ReadField<int>("familyId"); }
        void familyId(int value) const { WriteField<int>("familyId", value); }
        void* lineage() const { return ReadField<void*>("lineage"); }
        void lineage(void* value) const { WriteField<void*>("lineage", value); }
        void* lineageNames() const { return ReadField<void*>("lineageNames"); }
        void lineageNames(void* value) const { WriteField<void*>("lineageNames", value); }
        int origin() const { return ReadField<int>("origin"); }
        void origin(int value) const { WriteField<int>("origin", value); }
        int generation() const { return ReadField<int>("generation"); }
        void generation(int value) const { WriteField<int>("generation", value); }
        int bornWorldTick() const { return ReadField<int>("bornWorldTick"); }
        void bornWorldTick(int value) const { WriteField<int>("bornWorldTick", value); }
        int forgedBy() const { return ReadField<int>("forgedBy"); }
        void forgedBy(int value) const { WriteField<int>("forgedBy", value); }
        void* landName() const { return ReadField<void*>("landName"); }
        void landName(void* value) const { WriteField<void*>("landName", value); }
    };
}
