#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class MegaArmyClusters : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MegaArmyClusters(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "MegaArmyClusters") {}
    public:
        void Build(void* militaries, void* cfg, void* space, float cellWorld, bool cull, float minX, float minY, float maxX, float maxY) const { void* args[] = { militaries, cfg, space, &cellWorld, &cull, &minX, &minY, &maxX, &maxY }; Call("Build", args, 9); }
        void CollectCell(void* mil, void* space, float cellWorld, void* world, void* into) const { void* args[] = { mil, space, &cellWorld, world, into }; CallStatic("CollectCell", args, 5); }
        void Reset() const { Call("Reset", nullptr, 0); }
        int Dominant() const { return CallValue<int>("Dominant", nullptr, 0); }
        void* clusters() const { return ReadField<void*>("clusters"); }
        int key() const { return ReadField<int>("key"); }
        void SetKey(int value) const { WriteField<int>("key", value); }
        int milIndex() const { return ReadField<int>("milIndex"); }
        void SetMilIndex(int value) const { WriteField<int>("milIndex", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* center() const { return ReadField<void*>("center"); }
        void SetCenter(void* value) const { WriteField<void*>("center", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        float manpowerFrac() const { return ReadField<float>("manpowerFrac"); }
        void SetManpowerFrac(float value) const { WriteField<float>("manpowerFrac", value); }
        float orgFrac() const { return ReadField<float>("orgFrac"); }
        void SetOrgFrac(float value) const { WriteField<float>("orgFrac", value); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        bool fighting() const { return ReadField<bool>("fighting"); }
        void SetFighting(bool value) const { WriteField<bool>("fighting", value); }
        bool afloat() const { return ReadField<bool>("afloat"); }
        void SetAfloat(bool value) const { WriteField<bool>("afloat", value); }
        int key() const { return ReadField<int>("key"); }
        void SetKey(int value) const { WriteField<int>("key", value); }
        int milIndex() const { return ReadField<int>("milIndex"); }
        void SetMilIndex(int value) const { WriteField<int>("milIndex", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* weighted() const { return ReadField<void*>("weighted"); }
        void SetWeighted(void* value) const { WriteField<void*>("weighted", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        float manpowerSum() const { return ReadField<float>("manpowerSum"); }
        void SetManpowerSum(float value) const { WriteField<float>("manpowerSum", value); }
        float orgSum() const { return ReadField<float>("orgSum"); }
        void SetOrgSum(float value) const { WriteField<float>("orgSum", value); }
        bool fighting() const { return ReadField<bool>("fighting"); }
        void SetFighting(bool value) const { WriteField<bool>("fighting", value); }
        bool afloat() const { return ReadField<bool>("afloat"); }
        void SetAfloat(bool value) const { WriteField<bool>("afloat", value); }
        void* typeCount() const { return ReadField<void*>("typeCount"); }
    };
}
