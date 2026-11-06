#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponStats : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponStats(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponStats") {}
    public:
        int domain() const { return ReadField<int>("domain"); }
        void domain(int value) const { WriteField<int>("domain", value); }
        float muzzleVelocity() const { return ReadField<float>("muzzleVelocity"); }
        void muzzleVelocity(float value) const { WriteField<float>("muzzleVelocity", value); }
        float projectileGrams() const { return ReadField<float>("projectileGrams"); }
        void projectileGrams(float value) const { WriteField<float>("projectileGrams", value); }
        float energyJ() const { return ReadField<float>("energyJ"); }
        void energyJ(float value) const { WriteField<float>("energyJ", value); }
        float capacity() const { return ReadField<float>("capacity"); }
        void capacity(float value) const { WriteField<float>("capacity", value); }
        float rateOfFire() const { return ReadField<float>("rateOfFire"); }
        void rateOfFire(float value) const { WriteField<float>("rateOfFire", value); }
        float rangeM() const { return ReadField<float>("rangeM"); }
        void rangeM(float value) const { WriteField<float>("rangeM", value); }
        float accuracy() const { return ReadField<float>("accuracy"); }
        void accuracy(float value) const { WriteField<float>("accuracy", value); }
        float handling() const { return ReadField<float>("handling"); }
        void handling(float value) const { WriteField<float>("handling", value); }
        float wallMm() const { return ReadField<float>("wallMm"); }
        void wallMm(float value) const { WriteField<float>("wallMm", value); }
        float wallRequiredMm() const { return ReadField<float>("wallRequiredMm"); }
        void wallRequiredMm(float value) const { WriteField<float>("wallRequiredMm", value); }
        float wallServiceMm() const { return ReadField<float>("wallServiceMm"); }
        void wallServiceMm(float value) const { WriteField<float>("wallServiceMm", value); }
        float fullVelocity() const { return ReadField<float>("fullVelocity"); }
        void fullVelocity(float value) const { WriteField<float>("fullVelocity", value); }
        float firepower() const { return ReadField<float>("firepower"); }
        void firepower(float value) const { WriteField<float>("firepower", value); }
        float impactJ() const { return ReadField<float>("impactJ"); }
        void impactJ(float value) const { WriteField<float>("impactJ", value); }
        float balanceMm() const { return ReadField<float>("balanceMm"); }
        void balanceMm(float value) const { WriteField<float>("balanceMm", value); }
        float reach() const { return ReadField<float>("reach"); }
        void reach(float value) const { WriteField<float>("reach", value); }
        float cut() const { return ReadField<float>("cut"); }
        void cut(float value) const { WriteField<float>("cut", value); }
        float thrust() const { return ReadField<float>("thrust"); }
        void thrust(float value) const { WriteField<float>("thrust", value); }
        float blunt() const { return ReadField<float>("blunt"); }
        void blunt(float value) const { WriteField<float>("blunt", value); }
        float piercing() const { return ReadField<float>("piercing"); }
        void piercing(float value) const { WriteField<float>("piercing", value); }
        float agility() const { return ReadField<float>("agility"); }
        void agility(float value) const { WriteField<float>("agility", value); }
        float durability() const { return ReadField<float>("durability"); }
        void durability(float value) const { WriteField<float>("durability", value); }
        void* protection() const { return ReadField<void*>("protection"); }
        void protection(void* value) const { WriteField<void*>("protection", value); }
        float coverage() const { return ReadField<float>("coverage"); }
        void coverage(float value) const { WriteField<float>("coverage", value); }
        float carriedKg() const { return ReadField<float>("carriedKg"); }
        void carriedKg(float value) const { WriteField<float>("carriedKg", value); }
        float mobility() const { return ReadField<float>("mobility"); }
        void mobility(float value) const { WriteField<float>("mobility", value); }
        float vision() const { return ReadField<float>("vision"); }
        void vision(float value) const { WriteField<float>("vision", value); }
        float strengthBonus() const { return ReadField<float>("strengthBonus"); }
        void strengthBonus(float value) const { WriteField<float>("strengthBonus", value); }
        void* organProt() const { return ReadField<void*>("organProt"); }
        void organProt(void* value) const { WriteField<void*>("organProt", value); }
        float ergonomics() const { return ReadField<float>("ergonomics"); }
        void ergonomics(float value) const { WriteField<float>("ergonomics", value); }
        int ergoWorst() const { return ReadField<int>("ergoWorst"); }
        void ergoWorst(int value) const { WriteField<int>("ergoWorst", value); }
        float loadLitres() const { return ReadField<float>("loadLitres"); }
        void loadLitres(float value) const { WriteField<float>("loadLitres", value); }
        float loadKg() const { return ReadField<float>("loadKg"); }
        void loadKg(float value) const { WriteField<float>("loadKg", value); }
        float loadBonus() const { return ReadField<float>("loadBonus"); }
        void loadBonus(float value) const { WriteField<float>("loadBonus", value); }
        float vehicleAttack() const { return ReadField<float>("vehicleAttack"); }
        void vehicleAttack(float value) const { WriteField<float>("vehicleAttack", value); }
        float vehicleDefence() const { return ReadField<float>("vehicleDefence"); }
        void vehicleDefence(float value) const { WriteField<float>("vehicleDefence", value); }
        float speedKph() const { return ReadField<float>("speedKph"); }
        void speedKph(float value) const { WriteField<float>("speedKph", value); }
        float penetrationMm() const { return ReadField<float>("penetrationMm"); }
        void penetrationMm(float value) const { WriteField<float>("penetrationMm", value); }
        float frontalMm() const { return ReadField<float>("frontalMm"); }
        void frontalMm(float value) const { WriteField<float>("frontalMm", value); }
        float weightT() const { return ReadField<float>("weightT"); }
        void weightT(float value) const { WriteField<float>("weightT", value); }
        float powerKw() const { return ReadField<float>("powerKw"); }
        void powerKw(float value) const { WriteField<float>("powerKw", value); }
        float groundKpa() const { return ReadField<float>("groundKpa"); }
        void groundKpa(float value) const { WriteField<float>("groundKpa", value); }
        float carryT() const { return ReadField<float>("carryT"); }
        void carryT(float value) const { WriteField<float>("carryT", value); }
        float shellKg() const { return ReadField<float>("shellKg"); }
        void shellKg(float value) const { WriteField<float>("shellKg", value); }
        float blastRadiusM() const { return ReadField<float>("blastRadiusM"); }
        void blastRadiusM(float value) const { WriteField<float>("blastRadiusM", value); }
        float towKph() const { return ReadField<float>("towKph"); }
        void towKph(float value) const { WriteField<float>("towKph", value); }
        float reliability() const { return ReadField<float>("reliability"); }
        void reliability(float value) const { WriteField<float>("reliability", value); }
        float weightKg() const { return ReadField<float>("weightKg"); }
        void weightKg(float value) const { WriteField<float>("weightKg", value); }
        float lengthMm() const { return ReadField<float>("lengthMm"); }
        void lengthMm(float value) const { WriteField<float>("lengthMm", value); }
        int crew() const { return ReadField<int>("crew"); }
        void crew(int value) const { WriteField<int>("crew", value); }
        float complexity() const { return ReadField<float>("complexity"); }
        void complexity(float value) const { WriteField<float>("complexity", value); }
        float raw() const { return ReadField<float>("raw"); }
        void raw(float value) const { WriteField<float>("raw", value); }
        float score() const { return ReadField<float>("score"); }
        void score(float value) const { WriteField<float>("score", value); }
    };
}
