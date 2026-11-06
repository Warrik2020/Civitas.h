#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class NationLogistics : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationLogistics(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "NationLogistics") {}
    public:
        bool InBox(int cx, int cy) const { void* __callArgs[] = { &cx, &cy }; return CallValue<bool>("InBox", __callArgs, 2); }
        int Local(int cx, int cy) const { void* __callArgs[] = { &cx, &cy }; return CallValue<int>("Local", __callArgs, 2); }
        float NetworkOf(int l) const { void* __callArgs[] = { &l }; return CallValue<float>("NetworkOf", __callArgs, 1); }
        float BareNetworkOf(int l) const { void* __callArgs[] = { &l }; return CallValue<float>("BareNetworkOf", __callArgs, 1); }
        void Allocate(int cells) const { void* __callArgs[] = { &cells }; Call("Allocate", __callArgs, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
        int lastSolveTick() const { return ReadField<int>("lastSolveTick"); }
        void lastSolveTick(int value) const { WriteField<int>("lastSolveTick", value); }
        bool solved() const { return ReadField<bool>("solved"); }
        void solved(bool value) const { WriteField<bool>("solved", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void dirty(bool value) const { WriteField<bool>("dirty", value); }
        int ox() const { return ReadField<int>("ox"); }
        void ox(int value) const { WriteField<int>("ox", value); }
        int oy() const { return ReadField<int>("oy"); }
        void oy(int value) const { WriteField<int>("oy", value); }
        int fw() const { return ReadField<int>("fw"); }
        void fw(int value) const { WriteField<int>("fw", value); }
        int fh() const { return ReadField<int>("fh"); }
        void fh(int value) const { WriteField<int>("fh", value); }
        void* key() const { return ReadField<void*>("key"); }
        void key(void* value) const { WriteField<void*>("key", value); }
        void* bareKey() const { return ReadField<void*>("bareKey"); }
        void bareKey(void* value) const { WriteField<void*>("bareKey", value); }
        void* winner() const { return ReadField<void*>("winner"); }
        void winner(void* value) const { WriteField<void*>("winner", value); }
        void* cls() const { return ReadField<void*>("cls"); }
        void cls(void* value) const { WriteField<void*>("cls", value); }
        void* forage() const { return ReadField<void*>("forage"); }
        void forage(void* value) const { WriteField<void*>("forage", value); }
        void* sources() const { return ReadField<void*>("sources"); }
        float sMax() const { return ReadField<float>("sMax"); }
        void sMax(float value) const { WriteField<float>("sMax", value); }
        int keyMax() const { return ReadField<int>("keyMax"); }
        void keyMax(int value) const { WriteField<int>("keyMax", value); }
        float srcSum() const { return ReadField<float>("srcSum"); }
        void srcSum(float value) const { WriteField<float>("srcSum", value); }
        int srcCount() const { return ReadField<int>("srcCount"); }
        void srcCount(int value) const { WriteField<int>("srcCount", value); }
        int64_t srcHash() const { return ReadField<int64_t>("srcHash"); }
        void srcHash(int64_t value) const { WriteField<int64_t>("srcHash", value); }
        float techRange() const { return ReadField<float>("techRange"); }
        void techRange(float value) const { WriteField<float>("techRange", value); }
        float techOutput() const { return ReadField<float>("techOutput"); }
        void techOutput(float value) const { WriteField<float>("techOutput", value); }
        int lockVersion() const { return ReadField<int>("lockVersion"); }
        void lockVersion(int value) const { WriteField<int>("lockVersion", value); }
        int lastSourceCheckTick() const { return ReadField<int>("lastSourceCheckTick"); }
        void lastSourceCheckTick(int value) const { WriteField<int>("lastSourceCheckTick", value); }
        int cellsExpanded() const { return ReadField<int>("cellsExpanded"); }
        void cellsExpanded(int value) const { WriteField<int>("cellsExpanded", value); }
        int exemptState() const { return ReadField<int>("exemptState"); }
        void exemptState(int value) const { WriteField<int>("exemptState", value); }
        float totalCapacity() const { return ReadField<float>("totalCapacity"); }
        void totalCapacity(float value) const { WriteField<float>("totalCapacity", value); }
        void* summary() const { return ReadField<void*>("summary"); }
        void summary(void* value) const { WriteField<void*>("summary", value); }
    };
}
