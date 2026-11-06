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
        bool InBox(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("InBox", args, 2); }
        int Local(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<int>("Local", args, 2); }
        float NetworkOf(int l) const { void* args[] = { &l }; return CallValue<float>("NetworkOf", args, 1); }
        float BareNetworkOf(int l) const { void* args[] = { &l }; return CallValue<float>("BareNetworkOf", args, 1); }
        void Allocate(int cells) const { void* args[] = { &cells }; Call("Allocate", args, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        int lastSolveTick() const { return ReadField<int>("lastSolveTick"); }
        void SetLastSolveTick(int value) const { WriteField<int>("lastSolveTick", value); }
        bool solved() const { return ReadField<bool>("solved"); }
        void SetSolved(bool value) const { WriteField<bool>("solved", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void SetDirty(bool value) const { WriteField<bool>("dirty", value); }
        int ox() const { return ReadField<int>("ox"); }
        void SetOx(int value) const { WriteField<int>("ox", value); }
        int oy() const { return ReadField<int>("oy"); }
        void SetOy(int value) const { WriteField<int>("oy", value); }
        int fw() const { return ReadField<int>("fw"); }
        void SetFw(int value) const { WriteField<int>("fw", value); }
        int fh() const { return ReadField<int>("fh"); }
        void SetFh(int value) const { WriteField<int>("fh", value); }
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* bareKey() const { return ReadField<void*>("bareKey"); }
        void SetBareKey(void* value) const { WriteField<void*>("bareKey", value); }
        void* winner() const { return ReadField<void*>("winner"); }
        void SetWinner(void* value) const { WriteField<void*>("winner", value); }
        void* cls() const { return ReadField<void*>("cls"); }
        void SetCls(void* value) const { WriteField<void*>("cls", value); }
        void* forage() const { return ReadField<void*>("forage"); }
        void SetForage(void* value) const { WriteField<void*>("forage", value); }
        void* sources() const { return ReadField<void*>("sources"); }
        float sMax() const { return ReadField<float>("sMax"); }
        void SetSMax(float value) const { WriteField<float>("sMax", value); }
        int keyMax() const { return ReadField<int>("keyMax"); }
        void SetKeyMax(int value) const { WriteField<int>("keyMax", value); }
        float srcSum() const { return ReadField<float>("srcSum"); }
        void SetSrcSum(float value) const { WriteField<float>("srcSum", value); }
        int srcCount() const { return ReadField<int>("srcCount"); }
        void SetSrcCount(int value) const { WriteField<int>("srcCount", value); }
        int64_t srcHash() const { return ReadField<int64_t>("srcHash"); }
        void SetSrcHash(int64_t value) const { WriteField<int64_t>("srcHash", value); }
        float techRange() const { return ReadField<float>("techRange"); }
        void SetTechRange(float value) const { WriteField<float>("techRange", value); }
        float techOutput() const { return ReadField<float>("techOutput"); }
        void SetTechOutput(float value) const { WriteField<float>("techOutput", value); }
        int lockVersion() const { return ReadField<int>("lockVersion"); }
        void SetLockVersion(int value) const { WriteField<int>("lockVersion", value); }
        int lastSourceCheckTick() const { return ReadField<int>("lastSourceCheckTick"); }
        void SetLastSourceCheckTick(int value) const { WriteField<int>("lastSourceCheckTick", value); }
        int cellsExpanded() const { return ReadField<int>("cellsExpanded"); }
        void SetCellsExpanded(int value) const { WriteField<int>("cellsExpanded", value); }
        int exemptState() const { return ReadField<int>("exemptState"); }
        void SetExemptState(int value) const { WriteField<int>("exemptState", value); }
        float totalCapacity() const { return ReadField<float>("totalCapacity"); }
        void SetTotalCapacity(float value) const { WriteField<float>("totalCapacity", value); }
        void* summary() const { return ReadField<void*>("summary"); }
        void SetSummary(void* value) const { WriteField<void*>("summary", value); }
    };
}
