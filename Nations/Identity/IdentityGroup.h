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
        void ResetBounds(int x, int y) const { void* __callArgs[] = { &x, &y }; Call("ResetBounds", __callArgs, 2); }
        void Grow(int x, int y) const { void* __callArgs[] = { &x, &y }; Call("Grow", __callArgs, 2); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        bool authored() const { return ReadField<bool>("authored"); }
        void authored(bool value) const { WriteField<bool>("authored", value); }
        int foundingNationId() const { return ReadField<int>("foundingNationId"); }
        void foundingNationId(int value) const { WriteField<int>("foundingNationId", value); }
        int parentGroupId() const { return ReadField<int>("parentGroupId"); }
        void parentGroupId(int value) const { WriteField<int>("parentGroupId", value); }
        int familyId() const { return ReadField<int>("familyId"); }
        void familyId(int value) const { WriteField<int>("familyId", value); }
        void* lineage() const { return ReadField<void*>("lineage"); }
        void lineage(void* value) const { WriteField<void*>("lineage", value); }
        void* lineageNames() const { return ReadField<void*>("lineageNames"); }
        void lineageNames(void* value) const { WriteField<void*>("lineageNames", value); }
        uint8_t origin() const { return ReadField<uint8_t>("origin"); }
        void origin(uint8_t value) const { WriteField<uint8_t>("origin", value); }
        uint8_t OriginAuthored() const { return ReadStaticField<uint8_t>("OriginAuthored"); }
        uint8_t OriginMixed() const { return ReadStaticField<uint8_t>("OriginMixed"); }
        uint8_t OriginForged() const { return ReadStaticField<uint8_t>("OriginForged"); }
        uint8_t OriginBranched() const { return ReadStaticField<uint8_t>("OriginBranched"); }
        uint8_t generation() const { return ReadField<uint8_t>("generation"); }
        void generation(uint8_t value) const { WriteField<uint8_t>("generation", value); }
        int bornWorldTick() const { return ReadField<int>("bornWorldTick"); }
        void bornWorldTick(int value) const { WriteField<int>("bornWorldTick", value); }
        int forgedByNationId() const { return ReadField<int>("forgedByNationId"); }
        void forgedByNationId(int value) const { WriteField<int>("forgedByNationId", value); }
        void* landName() const { return ReadField<void*>("landName"); }
        void landName(void* value) const { WriteField<void*>("landName", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void bornTick(int value) const { WriteField<int>("bornTick", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void fill(void* value) const { WriteField<void*>("fill", value); }
        int minX() const { return ReadField<int>("minX"); }
        void minX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void minY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void maxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void maxY(int value) const { WriteField<int>("maxY", value); }
        int tileCount() const { return ReadField<int>("tileCount"); }
        void tileCount(int value) const { WriteField<int>("tileCount", value); }
        int64_t shareMass() const { return ReadField<int64_t>("shareMass"); }
        void shareMass(int64_t value) const { WriteField<int64_t>("shareMass", value); }
        int anchorTileIndex() const { return ReadField<int>("anchorTileIndex"); }
        void anchorTileIndex(int value) const { WriteField<int>("anchorTileIndex", value); }
        int anchorX() const { return ReadField<int>("anchorX"); }
        void anchorX(int value) const { WriteField<int>("anchorX", value); }
        int anchorY() const { return ReadField<int>("anchorY"); }
        void anchorY(int value) const { WriteField<int>("anchorY", value); }
        bool retired() const { return ReadField<bool>("retired"); }
        void retired(bool value) const { WriteField<bool>("retired", value); }
        int diasporaPasses() const { return ReadField<int>("diasporaPasses"); }
        void diasporaPasses(int value) const { WriteField<int>("diasporaPasses", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void dirty(bool value) const { WriteField<bool>("dirty", value); }
    };
}
