#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityGroup : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityGroup(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityGroup") {}
    public:
        void ResetBounds(int x, int y) const { void* args[] = { &x, &y }; Call("ResetBounds", args, 2); }
        void Grow(int x, int y) const { void* args[] = { &x, &y }; Call("Grow", args, 2); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        bool authored() const { return ReadField<bool>("authored"); }
        void SetAuthored(bool value) const { WriteField<bool>("authored", value); }
        int foundingNationId() const { return ReadField<int>("foundingNationId"); }
        void SetFoundingNationId(int value) const { WriteField<int>("foundingNationId", value); }
        int parentGroupId() const { return ReadField<int>("parentGroupId"); }
        void SetParentGroupId(int value) const { WriteField<int>("parentGroupId", value); }
        int familyId() const { return ReadField<int>("familyId"); }
        void SetFamilyId(int value) const { WriteField<int>("familyId", value); }
        void* lineage() const { return ReadField<void*>("lineage"); }
        void SetLineage(void* value) const { WriteField<void*>("lineage", value); }
        void* lineageNames() const { return ReadField<void*>("lineageNames"); }
        void SetLineageNames(void* value) const { WriteField<void*>("lineageNames", value); }
        uint8_t origin() const { return ReadField<uint8_t>("origin"); }
        void SetOrigin(uint8_t value) const { WriteField<uint8_t>("origin", value); }
        uint8_t OriginAuthored() const { return ReadStaticField<uint8_t>("OriginAuthored"); }
        uint8_t OriginMixed() const { return ReadStaticField<uint8_t>("OriginMixed"); }
        uint8_t OriginForged() const { return ReadStaticField<uint8_t>("OriginForged"); }
        uint8_t OriginBranched() const { return ReadStaticField<uint8_t>("OriginBranched"); }
        uint8_t generation() const { return ReadField<uint8_t>("generation"); }
        void SetGeneration(uint8_t value) const { WriteField<uint8_t>("generation", value); }
        int bornWorldTick() const { return ReadField<int>("bornWorldTick"); }
        void SetBornWorldTick(int value) const { WriteField<int>("bornWorldTick", value); }
        int forgedByNationId() const { return ReadField<int>("forgedByNationId"); }
        void SetForgedByNationId(int value) const { WriteField<int>("forgedByNationId", value); }
        void* landName() const { return ReadField<void*>("landName"); }
        void SetLandName(void* value) const { WriteField<void*>("landName", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void SetBornTick(int value) const { WriteField<int>("bornTick", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        int minX() const { return ReadField<int>("minX"); }
        void SetMinX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void SetMinY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void SetMaxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void SetMaxY(int value) const { WriteField<int>("maxY", value); }
        int tileCount() const { return ReadField<int>("tileCount"); }
        void SetTileCount(int value) const { WriteField<int>("tileCount", value); }
        int64_t shareMass() const { return ReadField<int64_t>("shareMass"); }
        void SetShareMass(int64_t value) const { WriteField<int64_t>("shareMass", value); }
        int anchorTileIndex() const { return ReadField<int>("anchorTileIndex"); }
        void SetAnchorTileIndex(int value) const { WriteField<int>("anchorTileIndex", value); }
        int anchorX() const { return ReadField<int>("anchorX"); }
        void SetAnchorX(int value) const { WriteField<int>("anchorX", value); }
        int anchorY() const { return ReadField<int>("anchorY"); }
        void SetAnchorY(int value) const { WriteField<int>("anchorY", value); }
        bool retired() const { return ReadField<bool>("retired"); }
        void SetRetired(bool value) const { WriteField<bool>("retired", value); }
        int diasporaPasses() const { return ReadField<int>("diasporaPasses"); }
        void SetDiasporaPasses(int value) const { WriteField<int>("diasporaPasses", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void SetDirty(bool value) const { WriteField<bool>("dirty", value); }
    };
}
